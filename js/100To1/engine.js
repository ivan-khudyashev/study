function defineLayout() {
	defineQueries();
}

function swithGame(gameId) {
	if(gameId == defineQueries.qInfo.currentGame) return;
	if(defineQueries.qInfo.isEndedGame != true)
		if(confirm("Текущая игра не закончена. Вы уверены что хотите переключиться на другую?") == false) return;
	
}