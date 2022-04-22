#include<iostream>
#include<unistd.h>
#include<unistd.h>


using namespace std;

class cperson
{
	private:
		cperson(){}
		~cperson(){}

	private:
		static cperson *ps;
		static pthread_mutex_t lock;
	public:
		static cperson *Getobject();

}
cperson *p1=NULL;



