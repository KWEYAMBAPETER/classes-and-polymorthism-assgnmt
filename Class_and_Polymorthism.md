# C++ Object-Oriented Programming Assignment

## Part 1: Runtime Polymorphism
This section demonstrates dynamic binding using a base class pointer.

### Key Concepts
* **Virtual Functions:** The base class declares a virtual function to allow overriding.
* **Method Overriding:** Derived classes implement specific behaviors for the shared function.
* **Dynamic Binding:** A base pointer dynamically executes the correct derived method at runtime.

### Program Behavior
* A base pointer points to a derived object.
* Calling the function triggers the specific derived implementation.
* The system correctly outputs unique sounds for each animal type.

## Part 2: Multilevel Inheritance
This section demonstrates a multi-tiered class hierarchy with sequential access.

### Key Concepts
* **Hierarchy Chain:** A sub-class acts as a base class for another derived class.
* **Access Modifiers:** Protected attributes pass down securely through the lineage.
* **Encapsulation:** The leaf class bundles and executes methods from all previous levels.

### Program Behavior
* The final sub-class object inherits names and identification fields.
* Input parameters flow seamlessly up the inheritance chain.
* The application aggregates and displays all data fields cleanly.
### Conclusion
Polymorphism allows different derived classes to provide different implementations of the same virtual function. This makes programs more flexible and supports object-oriented design.