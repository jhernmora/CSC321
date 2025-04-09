#Jessenia Hernandez Mora
#CSC321, Lab 12

def triangle(base, height):
    area = 0.5 * base * height
    return area

def circle(radius):
    area = 3.14 * (radius * radius)
    return area

#TRIANGLE
x = int(input("Enter the base of your right triangle: "))
y = int(input("Enter the height of your right triangle: "))

triArea = triangle(x, y)

print("The area of the triangle is: ", triArea);

#CIRCLE
z = int(input("Enter the radius of your circle: "))

circArea = circle(z)

print("The area of the triangle is: ", circArea);
