class Exception1(Exception):
    pass
class Exception2(Exception):
    pass
class Exception3(Exception):
    pass
try:
    try:
        raise Exception2()
    except Exception1:
        raise Exception3()
    except Exception2:
        print("G")
    try:
        raise Exception3()
    except Exception3:
        print("G")
    print("H")
except Exception3:
    print("G")
print("H")