# Copyright (C) 2019-2020, Khudyashev Ivan, bahek1983@gmail.com

def unicodeTest(value):
    import unicodedata
    name = unicodedata.name(value)
    uValue = unicodedata.lookup(name)
    print('value="%s", name="%s", unicodeValue="%s"'
        % (
            value, 
            name, 
            uValue
        )
    )

def doAction():
    unicodeTest('A')
    unicodeTest('\u2708')
    unicodeTest('\u03C0')

def main():
    doAction()

if __name__ == "__main__":
    main()
