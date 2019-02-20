function defineQueries()
{
	var questionsStorage = [];//[["q11", "q12"],["q21", "q22"]];
	var questionsCount = 5, categoriesCount = 4;
	var indexI = 0, indexJ = 0;
	var startPrice = 30, deltaPrice = 20, nextPrice = 0;
	while(indexI < categoriesCount) {
		questionsStorage[indexI] = [];
		indexJ = 0;
		nextPrice = startPrice;
		while(indexJ < questionsCount) {
			questionsStorage[indexI][indexJ] = {
				question: "Question" + (indexI + 1).toString() + (indexJ + 1).toString(),
				price: nextPrice+=deltaPrice,
				answer: "Answ" + (indexI + 1).toString() + (indexJ + 1).toString()
			}
			
			indexJ++;
		}
		indexI++;
	}
	indexI = 0;
	var categoriesStorage = [];
	while(indexI < categoriesCount) {
		categoriesStorage[indexI] = "cat" + (indexI + 1).toString();
		indexI++;
	}
	defineQueries.qInfo = {questions: questionsStorage, categories: categoriesStorage};
	defineQueries.transferValues = {qNum: 0, catNum: 0, isCorrectAnswer: false, closeHandler: null};
}