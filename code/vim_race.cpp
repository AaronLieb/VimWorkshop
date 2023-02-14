#include <iostream>

void useless() {
  int five = 5;
  int four = 4;
  int one = five - four;
}

class Human {
  private:
    std::string name;
    int age;
  public:
    Human(std::string name_, int age_) {
      name = name_;
      age = age_;
    }

    std::string getName() { return name; }
    int getAge() { return age; }
};

int main() {
  std::cout << "Starting program..." << std::endl; 
  Human somePerson = Human("Ben Ten", 16);

  std::string names[5] = {
    "Manny",
    "Amanda",
    "George",
    "Mohommad",
    "Trisha"
  };

  for (int i = 0; i < 5; i++) {
    std::string name = Human(names[i], 0).getName();
    std::cout << name << std::endl;
  }
}
