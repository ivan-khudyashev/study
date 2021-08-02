# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

from typing import List, Any
from typing import Callable


def secondBotGetAnswer():
    return abs(int(input()))


def firstAnswerFunc(answers):
    formattedAnswerString="Nice to meet you {}. Film {} is a good choise"
    print( \
        formattedAnswerString.format(*answers) \
    )


def secondAnswerFunc(answers):
    if answers[-1] < 0 or answers[-1] > 10:
        print( \
            "Value {} for scale 0 <= x <= 10? Are you kidding?".format( \
                answers[0] \
            ) \
        )
        return None
    if answers[-1] < 3:
        print("Ouch, it must be terrible")
    elif answers[-1] < 6:
        print("Well, probably not recommended this film")
    elif answers[-1] < 9:
        print("Yeah, this is a good film")
    else:
        print("This not just film, it is masterpeace!")


def botDialogEngine(greeting: str, questions: List, \
                getAnswer: Callable[[], Any], \
                processAnswer: Callable[[List], None],
                isAnswerOnEveryQuestion: bool):
    print(greeting)
    answers = []
    for q in questions:
        print(q)
        answers.append(getAnswer())
        if isAnswerOnEveryQuestion:
            processAnswer(answers)
    if not isAnswerOnEveryQuestion:
        processAnswer(answers)


def firstBotDialog():
    botDialogEngine( \
        greeting="Hello", \
        questions=[ \
            "What is your name? ", \
            "What is your favorite film? " \
        ], \
        getAnswer=input, \
        processAnswer=firstAnswerFunc, \
        isAnswerOnEveryQuestion=False \
    )


def secondBotDialog():
    botDialogEngine( \
        greeting="Hello", \
        questions=[ \
"For your favorite film, how good it, where 0 - very bad and 10 - excellent: ", \
"Rate film 'Matrix' (0 <= x <= 10), x = " \
        ], \
        getAnswer=secondBotGetAnswer, \
        processAnswer=secondAnswerFunc, \
        isAnswerOnEveryQuestion=True \
    )


def doAction():
    firstBotDialog()
    secondBotDialog()
    print("Conversation is over")


def main():
    doAction()

if __name__ == "__main__":
    main()
