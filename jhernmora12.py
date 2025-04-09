#Jessenia Hernandez Mora
#CSC321, Lab 12

def rectangle(base, height):
    area = base * height
    return area

def circle(radius):
    area = 3.14 * (radius * radius)
    return area

#RECTANGLE
x = int(input("Enter the base of your rectangle: "))
y = int(input("Enter the height of your rectangle: "))

rectArea = rectangle(x, y)

print("The area of the rectangle is: ", rectArea);

#CIRCLE
z = int(input("Enter the radius of your circle: "))

circArea = circle(z)

print("The area of the circle is: ", circArea);
