function correctAnswer() {
	var qNum = window.opener.defineQueries.transferValues.qNum;
	var catNum = window.opener.defineQueries.transferValues.catNum;
	var prizePrice = window.opener.defineQueries.qInfo.questions[catNum][qNum].price
	window.opener.reactOnCloseAnswer(prizePrice);
	window.close();
}

function wrongAnswer() {
	window.close();
}

function defineQueryWindow() {
	var title = window.document.getElementById("titleQueryWindow");
	var questionBody = window.document.getElementById("questionBody");
	if(window.dialogArguments != null) {
		title.innerHTML = "Вопрос на " + window.dialogArguments[1].toString() + " очков";
		questionBody.innerHTML = window.dialogArguments[0];
	}
	else {
		var qNum = window.opener.defineQueries.transferValues.qNum;
		var catNum = window.opener.defineQueries.transferValues.catNum;
		title.innerHTML = "Вопрос на " + window.opener.defineQueries.qInfo.questions[catNum][qNum].price.toString() + " очков";  
		questionBody.innerHTML = "<p>" + window.opener.defineQueries.qInfo.questions[catNum][qNum].question + "</p>";
	}
}