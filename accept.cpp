// Simple Program that gets your name and age than returns values.
int main()
{
    std::string name;
    int age; 


    std::cout << "What is full your name fam? ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "What is your age? ";
    std::cin >> age;

    std::cout << "Hello " << name << "!" << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;
