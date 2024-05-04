

#include <iostream>
#include <string>


int main()
{
  std:: string name;
  std:: string surname;
  std:: cout<<"eneter yo surname";
  std::getline(std::cin,surname);
  std:: cout<<"enter yo name";
  std:: getline(std::cin,name);
  std:: cout<<name<<surname<<"you looking for which gender"<<std::endl;
  int z;
  std:: cout<<"pleasse select enter 1,2 or 3"<<std::endl;
  std:: cout<<"1 boyz"<<std::endl;
  std:: cout <<"2 galz"<<std:: endl;
  std:: cout<<"3 both"<<std:: endl;
  std::cin>>z;
  switch(z){
      case 1:
      std::cout<<" boyz"<<std::endl;
      int age1;
      std::cout<<"age you looking for first interval digit"<<std::endl;
      std::cin>>age1;
      int age2;
      std::cout<<"age you looking for last interval digit"<<std::endl;
      std::cin>>age2;
      int height;
      std::cout<<"first heigth interval you looking for"<<std::endl;
      std::cin>>height;
      int height1;
      std::cout<<"last height digit interval you looking for"std::endl;
      std::cin>>height1;
      if (age1==age1||age2==age2)
      else if(age1<age2 %% age1)



      break;

      case 2:
     std::cout<<"gals"<<std::endl;
      break;

      case 3:
     std::cout<<"both"<<std::endl;
      break;
  }

    return 0;

}
