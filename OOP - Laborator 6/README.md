# LAB-6 (INHERITANCE)

Write the following classes in C++:
* An abstract class **Car** that reflects some properties on a car (fuel capacity, fuel consumption, average speed on different conditions (Rain, Sunny, Snow)).
* Derive from this class several type of Cars with different characteristics for fuel capacity, fuel consumption, etc.
* For weather condition create an ***enum*** object.
* Create a class circuit that will test how different cars behave in a race depending on the length of the circuit and the race weather condition. The circuit will use polymorphism to simulate the race conditions (e.g. will have an array of objects of type ***Car****).
* Use the following **main** snippet to show how this ensemble works:
    ```
    int main()
    {
       Circuit c;
       c.SetLength(100);
       c.SetWeather(Weather::Rain);
       c.AddCar(new Dacia());
       c.AddCar(new Toyota());
       c.AddCar(new Mercedes());
       c.AddCar(new Ford());
       c.AddCar(new Mazda());
       c.Race();
       c.ShowFinalRanks(); // it will print the time each car needed to finish the circuit sorted from the fastest car to the slowest.
       c.ShowWhoDidNotFinish(); // it is possible that some cars don't have enough fuel to finish the circuit
       return 0;
    }
    ```
Organize the code in the following way:
* a header file for each different car (Dacia, Toyota, …), a header file for the abstract class **Car**, a header file for the Weather enum and one for **Circuit**.
* a .cpp file for each different implementation of a car (Dacia, Toyota, etc.). Abstract class **Car** only has virtual methods (it does not need a .cpp file).
* a .cpp file for **Circuit** class.
* a main file called **main.cpp** that contains the main function.
