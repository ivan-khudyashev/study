function defineLayout() {
	var qTable = window.document.getElementById("questionsTable");
	if(qTable == null)
		throw new OwnGameException("Отсутствует элемент HTML для загрузки таблицы с вопросами");
	if(defineQueries!= null) {
		defineQueries();
	}
	else 
		throw new OwnGameException("На загрузилась функция определения");
	var categoriesCount = defineQueries.qInfo.categories.length;
	var questionsCount = defineQueries.qInfo.questions[0].length;
	var tblElementContent = "<table id='tableQuestions'>\n\t<colgroup>\n\t\t<col span='1' style='width: 40%'/>";
	var indexJ = 1;
	// Set width of Columns
	while(indexJ < questionsCount) {
		tblElementContent += "\n\t\t<col span='1' style='width: 15%'/>";
		++indexJ;
	}
	tblElementContent += "\n\t</colgroup>";
	var indexI = 0;
	indexJ = 0;
	while(indexI < categoriesCount) {
		tblElementContent += "<tr class='qTableRow'>";
		tblElementContent += ("<th class='categoryHeader'>" + defineQueries.qInfo.categories[indexI] + "</th>");
		indexJ = 0;
		while(indexJ < questionsCount) {
			tblElementContent += (
				"\n<td class='questionField' id='qtd" 
				+ indexI.toString()
				+ indexJ.toString()
				+ "' onclick='pressQuestionField(" 
				+ indexI.toString() 
				+ ", "
				+ indexJ.toString()
				+ ")'>" 
				+ defineQueries.qInfo.questions[indexI][indexJ].price.toString() 
				+ "</td>"
			);
			++indexJ;
		}
		tblElementContent += "</tr>";
		++indexI;
	}
	qTable.innerHTML = tblElementContent;
	
	// Turn off this strange function
	window.showModalDialog = undefined;
}

function pressQuestionField(categoryNum, questionNum) {
	if(window.showModalDialog) {
		var returnValues = window.showModalDialog(
			"question.htm", 
			[
				defineQueries.qInfo.questions[categoryNum][questionNum].question,
				defineQueries.qInfo.questions[categoryNum][questionNum].price,
				defineQueries.qInfo.questions[categoryNum][questionNum].answer
			], 
			"dialogWidth:800; dialogHeight:600"
		);
		// Process used fild for question
		var aquirePoints = returnValues[0];
		var tdid = "qtd" + categoryNum.toString() + questionNum.toString();
		window.document.getElementById(tdid).innerHTML = "";
		window.document.getElementById(tdid).removeAttribute("onclick");
		// Recalculate Points
		var pointsNumberValueElem = window.document.getElementById("pointsNumberValue");
		if( aquirePoints != 0) {
			aquirePoints += Number(pointsNumberValueElem.innerHTML);
			pointsNumberValueElem.innerHTML = aquirePoints;
			if(defineQueries.qInfo.alreadyWin == false && aquirePoints >= prizeNumberValue) {
				pointsNumberValueElem.setAttribute("style", pointsPrizeNumberValueElem.getAttribute("style"));
				defineQueries.qInfo.alreadyWin = true;
				alert("Вы победили! Поздравляем!");
			}
		}
	}
	else {
		defineQueries.transferValues.qNum = questionNum;
		defineQueries.transferValues.catNum = categoryNum;
		window.open("question.htm", "ProcessQuery", "resizable=no,width=800px,height=600px");
	}
}

function reactOnCloseAnswer(aquirePoints) {
	var tdid, catNum, qNum;
	var pointsNumberValueElem = window.document.getElementById("pointsNumberValue");
	var pointsPrizeNumberValueElem = window.document.getElementById("pointsPrizeNumberValue");
	var prizeNumberValue = Number(pointsPrizeNumberValueElem.innerHTML);
	if(window.showModalDialog) {
	}
	else {
		catNum = defineQueries.transferValues.catNum
		qNum = defineQueries.transferValues.qNum
		if( aquirePoints != 0) {
			aquirePoints += Number(pointsNumberValueElem.innerHTML);
			pointsNumberValueElem.innerHTML = aquirePoints;
			
		}
	}
	if(defineQueries.qInfo.alreadyWin == false && aquirePoints >= prizeNumberValue) {
		pointsNumberValueElem.setAttribute("style", pointsPrizeNumberValueElem.getAttribute("style"));
		defineQueries.qInfo.alreadyWin = true;
		alert("Вы победили! Поздравляем!");
	}
	tdid = "qtd" + catNum.toString() + qNum.toString();
	window.document.getElementById(tdid).innerHTML = "";
	window.document.getElementById(tdid).removeAttribute("onclick");
}