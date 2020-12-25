#include "pch.h"
#include "CppUnitTest.h"
#include "../laba11.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ofstream file("C:\\Student\\ [Sorochak.Stanislav.IK-11]\\Lab_11.1(C++)\\Lab_11.1(C++)\\test.txt", ios::binary);

			double x = 0.5;
			for (int i = 0; i < 6; i++)
			{
				x = x + 0.5;
				cout << x << endl;
				file.write((char*)&x, sizeof(double));
			}
			file.close();

			operation("C:\\Student\\ [Sorochak.Stanislav.IK-11]\\Lab_11.1(C++)\\Lab_11.1(C++)\\test.txt", "C:\\Student\\ [Tkachenko.Marharyta.IK-11]\\Lab_11.1(C++)\\Lab_11.1(C++)\\test.txtt", 6);
			ifstream file_l("C:\\Student\\ [Sorochak.Stanislav.IK-11]\\Lab_11.1(C++)\\Lab_11.1(C++)\\test.txt", ios::binary);
			file_l.read((char*)&x, sizeof(double));

			Assert::AreEqual(x, 3.5);
			file_l.close();
		}
	};
}
