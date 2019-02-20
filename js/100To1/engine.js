function defineLayout() {
	defineQueries();
}

function swithGame(gameIdentifier) {
	if(gameIdentifier == defineQueries.qInfo.currentGame) return;
	if(defineQueries.qInfo.isEndedGame != true)
		if(confirm("Текущая игра не закончена. Вы уверены что хотите переключиться на другую?") == false) return;
	// Set current Game
	defineQueries.qInfo.isEndedGame = false;
	defineQueries.qInfo.currentGame = gameIdentifier;
	var curGameIndex = defineQueries.qInfo.gameId[gameIdentifier];
	defineQueries.qInfo.gameIdentifierIndex = defineQueries.qInfo.gameId[gameIdentifier];
	// Unset button of previos game
	// TODO
	// Set button of current game
	var gameButtonElem = window.document.getElementById(gameIdentifier);
	gameButtonElem.setAttribute("class", "gameButtonPress");
	
	var queryElem = window.document.getElementById("questionField");
	queryElem.innerHTML = defineQueries.qInfo.data[curGameIndex].question
}

function checkAnswer(teamNum) {
	var checkedAnswerElem = window.document.getElementById("checkedAnswer");
	//var checkingAnswer = checkedAnswerElem.getAttribute("value");
	var checkingAnswer = checkedAnswerElem.value;
	// finding answer
	var isFind = findAnswerFrom(checkingAnswer);
	if(isFind == 0) {
		// FALL
		
	}
	else {
		// Open
	}
}

function findAnswerFrom(checkingAnswer) {
	var index = 0;
	var cntAnswers = 6
	var curGameIndex = defineQueries.qInfo.gameId[gameIdentifier];
	var curAnswerList = defineQueries.qInfo.data[curGameIndex].variants;
	while(index < cntAnswers) {
		if(checkingAnswer == curAnswerList[index].correctAnswers)
			return index + 1;
	}
	return 0;
}