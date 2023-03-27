#include<iostream>
using namespace std;
class mobile
{
    private:
     string name;
     int ram;
     string processor;
     int battery;
    public:
     mobile(string name_a="Null",int ram_a=0,string processor_a="Null",int battery_a=0)
     {
        name=name_a;
        ram=ram_a;
        processor=processor_a;
        battery=battery_a;
     }
     mobile(mobile &mob)
     {
        name=mob.name;
        ram=mob.ram;
        processor=mob.processor;
        battery=mob.battery;
     }
    void getmobiledata();
};
void mobile::getmobiledata()
{
    std::cout << "name = " <<name<< std::endl;
    std::cout << "ram = " <<ram<< std::endl;
    std::cout << "processor = " <<processor<<std::endl;
    std::cout << "battery = " <<battery<< std::endl;
}
int main()
{
  mobile doko;
  mobile doko1("ankit",512,"octa",60000);
  mobile doko2(doko1);
  doko.getmobiledata();
  doko1.getmobiledata();
  doko2.getmobiledata();
  return 0;
}