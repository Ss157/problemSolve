import turtle as t
t.shape("turtle")

while True:
    command = input("왼:left, 오:right, 종료:quit : ")
    if command=="left":
        t.left(60)
        t.forward(50)
    elif command=="right":
        t.right(60)
        t.forward(50)
    elif command=="quit":
        break

t.exitonclick()