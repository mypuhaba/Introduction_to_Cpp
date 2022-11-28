#include "cell_phone.h"

int main()
{
	CellPhone obj;
	obj.getPhone("010-1234-5678", "Galaxy", "Black");
	obj.setOn();
	obj.print();
}