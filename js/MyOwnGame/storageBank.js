function defineQueries()
{
	var questionsStorage = [
		[
			{
				question: "Назовите имена мам молодожёнов",
				price: 40,
				answer: "Тамара, Елена"
			},
			{
				question: "Как Ивана называют все Катины близкие родственники?",
				price: 60,
				answer: "Ванечка"
			},
			{
				question: "На ком ребята получали первые серьёзные знания о детях( на этом ребёнке они и учились)?",
				price: 80,
				answer: "Катин брат Гоша"
			},
			{
				question: "Как ребята назовут первого мальчика?",
				price: 100,
				answer: "Олег"
			}
		],
		[
			{
				question: "Где было сделано предложение и подарено кольцо?",
				price: 40,
				answer: "в Шерегеше"
			},
			{
				question: "Для чего Иван использовал своё служебное положение?",
				price: 60,
				answer: "чтобы узнать информацию о Кате в базах данных университета, к которым у него был доступ"
			},
			{
				question: "Иван когда-то давно пригласил Катю на кофе. На что было изменено предложение?",
				price: 80,
				answer: "на горячий шоколад"
			},
			{
				question: "Какой самый первый подарок подарил Иван своей суженой?",
				price: 100,
				answer: "цветы в вакууме"
			}
		],
		[
			{
				question: "Кто первый признался в своих чувствах?",
				price: 40,
				answer: "жених"
			},
			{
				question: "Как Иван ласково называет свою невесту?",
				price: 60,
				answer: "КАтёнок, через А"
			},
			{
				question: "Что ценит невеста больше всего в своём женехе?",
				price: 80,
				answer: "заботу и внимание"
			},
			{
				question: "Когда впервые Катя вслух назвала Ивана своим будущим мужем?",
				price: 100,
				answer: "лето 2014 года, Анапа"
			}
		],
		[
			{
				question: "Что ребята подарили друг другу на 23 февраля и 8 марта в 2017 году?",
				price: 40,
				answer: "Горнолыжные комплекты"
			},
			{
				question: "Любимое кафе в Шерегеше",
				price: 60,
				answer: "Юрта"
			},
			{
				question: "Любимый спуск ребят, на который Иван, по незнанию, долго не пускал свою невесту",
				price: 80,
				answer: "Панорама"
			},
			{
				question: "Сколько раз ребята вместе были в Шерегеше?",
				price: 100,
				answer: "7 раз"
			}
		],
		[
			{
				question: "Чьей инициативой было выбирать вместе свадебное платье?",
				price: 40,
				answer: "Ивана"
			},
			{
				question: "Сколько гостей сегодня присутствует на свадьбе?",
				price: 60,
				answer: "Динамически-определяемый ответ"
			},
			{
				question: "В каком году ребята будут отмечать бумажную свадьбу?",
				price: 80,
				answer: "в 2020"
			},
			{
				question: "Сколько гостей было по списку для приглашения на свадьбу?",
				price: 100,
				answer: "больше 100"
			}
		]
		
	];
	/*
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
	*/
	var categoriesStorage = ["Семья", "Отношения", "Чувства", "Любовь и горы", "Разное"];
	/*
	while(indexI < categoriesCount) {
		categoriesStorage[indexI] = "cat" + (indexI + 1).toString();
		indexI++;
	}
	*/
	defineQueries.qInfo = {questions: questionsStorage, categories: categoriesStorage};
	defineQueries.transferValues = {qNum: 0, catNum: 0, isCorrectAnswer: false, closeHandler: null};
}