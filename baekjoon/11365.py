while True:
    statements=input()
    if statements=="END":
        break
    else:
        reversed_statements="".join(reversed(statements))
        print(reversed_statements)