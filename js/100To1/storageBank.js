function defineQueries()
{
	var dataSimpleGame = {
		question: "Назовите одно качство личности, которое Иван ценит больше всего в своей невесте",
		variants: [
			{answer: "красота/обаяние", point: 21, realPoint: 21, correctAnswers: "красота"},
			{answer: "ум", point: 13, realPoint: 13, correctAnswers: "ум"},
			{answer: "весёлость/жизнерадостность", point: 8, realPoint: 8, correctAnswers: "веселость"},
			{answer: "открытость", point: 8, realPoint: 8, correctAnswers: "открытость"},
			{answer: "активность/энергичность", point: 8, realPoint: 8, correctAnswers: "активность"},
			{answer: "доброта", point: 8, realPoint: 8, correctAnswers: "доброта"}
		]
	};
	var dataDoubleGame = {
		question: "",
		variants: [
			{answer: "", point: 0, realPoint: 0, correctAnswers: ""},
			{answer: "", point: 0, realPoint: 0, correctAnswers: ""},
			{answer: "", point: 0, realPoint: 0, correctAnswers: ""},
			{answer: "", point: 0, realPoint: 0, correctAnswers: ""},
			{answer: "", point: 0, realPoint: 0, correctAnswers: ""},
			{answer: "", point: 0, realPoint: 0, correctAnswers: ""}
		]
	};
	var dataTripleGame = {
		question: "",
		variants: [
			{answer: "", point: 0, realPoint: 0, correctAnswers: ""},
			{answer: "", point: 0, realPoint: 0, correctAnswers: ""},
			{answer: "", point: 0, realPoint: 0, correctAnswers: ""},
			{answer: "", point: 0, realPoint: 0, correctAnswers: ""},
			{answer: "", point: 0, realPoint: 0, correctAnswers: ""},
			{answer: "", point: 0, realPoint: 0, correctAnswers: ""}
		]
	};
	var dataReverceGame = {
		question: "",
		variants: [
			{answer: "", point: 0, realPoint: 0, correctAnswers: ""},
			{answer: "", point: 0, realPoint: 0, correctAnswers: ""},
			{answer: "", point: 0, realPoint: 0, correctAnswers: ""},
			{answer: "", point: 0, realPoint: 0, correctAnswers: ""},
			{answer: "", point: 0, realPoint: 0, correctAnswers: ""},
			{answer: "", point: 0, realPoint: 0, correctAnswers: ""}
		]
	};
	var dataBigGame = {};
	
	// Main Storage!
	var dataStorage = [
		dataSimpleGame, 
		dataDoubleGame, 
		dataTripleGame, 
		dataReverceGame, 
		dataBigGame
	];
	
	// Define Games' ID
	var gameIdentifier = {simpleGame: 0, doubleGame: 1, tripleGame: 2, reverseGame: 3, bigGame: 4}
	
	defineQueries.qInfo = {data: dataStorage, currentGame: "", isEndedGame: false, gameId: gameIdentifier, gameIdentifierIndex: null};
	defineQueries.transferValues = {}
}