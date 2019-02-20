function defineLayout() {
	var qTable = window.document.getElementById("questionsTable");
	if(qTable == null)
		throw new OwnGameException("Отсутствует элемент HTML для загрузки таблицы с вопросами");
	if(defineQueries!= null) {
		defineQueries();
		/*
		if(defineQueries.qInfo!= null) 
			alert(
				"cat[0] = " + defineQueries.qInfo.categories[0] + "\n question[0][0]" + 
				defineQueries.qInfo.questions[0][0].question + "\n price[1][3]" + 
				defineQueries.qInfo.questions[1][3].price
			);
		*/
	}
	else 
		throw new OwnGameException("На загрузилась функция определения");
	var categoriesCount = defineQueries.qInfo.categories.length;
	var questionsCount = defineQueries.qInfo.questions[0].length;
	// alert("questionsCount = " + questionsCount);
	var tblElementContent = "<table id='tableQuestions'>";
	var indexI = 0, indexJ = 0;
	while(indexI < categoriesCount) {
		tblElementContent += "<tr>";
		tblElementContent += ("<th class='categoryHeader'>" + defineQueries.qInfo.categories[indexI] + "</th>");
		indexJ = 0;
		while(indexJ < questionsCount) {
			tblElementContent += (
				"\n<td class='questionField' onclick='pressQuestionField(" 
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
}

function pressQuestionField(categoryNum, questionNum) {
	var aquirePoints;
	if(window.showModalDialog) {
		aquirePoints = window.showModalDialog(
			"question.htm", 
			[defineQueries.qInfo.questions[categoryNum][questionNum].question.toString(), defineQueries.qInfo.questions[categoryNum][questionNum].price], 
			"dialogWidth:400; dialogHeight:300"
		);
	}
	else {
		defineQueries.transferValues.qNum = questionNum;
		defineQueries.transferValues.catNum = categoryNum;
		var qWindow = window.open("question.htm", "ProcessQuery", "dialogwidth:100; dialogheight:70; resizable:no");
		var dummy = 1;
	}
}

function reactOnCloseAnswer(aquirePoints) {
	if( aquirePoints != 0) {
		var pointsNumberValueElem = window.document.getElementById("pointsNumberValue");
		aquirePoints += Number(pointsNumberValueElem.innerHTML);
		pointsNumberValueElem.innerHTML = aquirePoints;
	}
}