function correctAnswer() {
	if(window.dialogArguments != null) {
		window.returnValue = [];
		window.returnValue[0] = window.dialogArguments[1];
	}
	else {
		var qNum = window.opener.defineQueries.transferValues.qNum;
		var catNum = window.opener.defineQueries.transferValues.catNum;
		var prizePrice = window.opener.defineQueries.qInfo.questions[catNum][qNum].price;
		window.opener.reactOnCloseAnswer(prizePrice);
	}
	window.close();
}

function wrongAnswer() {
	if(window.dialogArguments != null) {
		window.returnValue = [];
		window.returnValue[0] = Number(0);
	}
	else {
		window.opener.reactOnCloseAnswer(Number(0));
	}
	window.close();
}

function showAnswer() {
	var answer = window.document.getElementById("questionAnswer");
	var showBtn = window.document.getElementById("showAnswerButton");
	var answerText = "";
	if(window.dialogArguments != null) {
		answerText = window.dialogArguments[2];
	}
	else {
		var qNum = window.opener.defineQueries.transferValues.qNum;
		var catNum = window.opener.defineQueries.transferValues.catNum;
		answerText = window.opener.defineQueries.qInfo.questions[catNum][qNum].answer;
	}
	if(showBtn.textContent == "Показать ответ") {
		answer.innerHTML = "<p>" + answerText + "</p>";
		showBtn.textContent = "Скрыть ответ"
	}
	else {
		showBtn.textContent = "Показать ответ"
		answer.innerHTML = "<p></p>";
	}
}

function defineQueryWindow() {
	var title = window.document.getElementById("titleQueryWindow");
	var questionBody = window.document.getElementById("questionBody");
	if(window.dialogArguments != null) {
		title.innerHTML = "Вопрос на " + window.dialogArguments[1].toString() + " очков";
		questionBody.innerHTML =  "<p>" + window.dialogArguments[0] + "</p>";
	}
	else {
		var qNum = window.opener.defineQueries.transferValues.qNum;
		var catNum = window.opener.defineQueries.transferValues.catNum;
		title.innerHTML = "Вопрос на " + window.opener.defineQueries.qInfo.questions[catNum][qNum].price.toString() + " очков";  
		questionBody.innerHTML = "<p>" + window.opener.defineQueries.qInfo.questions[catNum][qNum].question + "</p>";
	}
}