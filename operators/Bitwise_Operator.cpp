#include<iostream>
#include<bitset>
int main()
{
  
	short Font = 0b00000011'0'1'1'01100;
	short SizeMask = (0b00000000'0'0'0'11111)&(Font);
	short BoldMask = (0b00000000'0'0'1'00000)&(Font);
	short ItalicMask = (0b00000000'0'1'0'00000)&(Font);
	short StyleMask = (0b11111111'0'0'0'00000)&(Font);




	std::cout<<"Font :"<<Font<<std::endl;
	std::cout<<"Font size:"<<std::bitset<16>(Font)<<std::endl;

	std::cout<<"SizeMask :"<<SizeMask<<std::endl;
	std::cout<<"SizeMask info:"<<std::bitset<16>(SizeMask)<<std::endl;


	std::cout<<"BoldMask :"<<BoldMask<<std::endl;
	std::cout<<"BoldMask info:"<<std::bitset<16>(BoldMask)<<std::endl;
	
	std::cout<<"ItalicMask :"<<ItalicMask<<std::endl;
	std::cout<<"ItalicMask info:"<<std::bitset<16>(ItalicMask)<<std::endl;
    
    std::cout<<"StyleMask :"<<StyleMask<<std::endl;
	std::cout<<"StyleMask info:"<<std::bitset<16>(StyleMask)<<std::endl;


    std::cout<<"-------------------------------------------------------"<<std::endl<<std::endl;

	short SizeMask1 = 0b00000000'0'0'0'10101;
	auto NewFont = (Font^SizeMask)^(SizeMask1);
	std::cout<<"Font  info:"<<std::bitset<16>(NewFont)<<std::endl;

    std::cout<<"-------------------------------------------------------"<<std::endl<<std::endl;

	short NewFont1{0b00000000'0'0'0'00000};
	std::cout<<"NewFont1  :"<<std::bitset<16>(NewFont1)<<std::endl;
	NewFont1=(NewFont1^BoldMask);
	std::cout<<"NewFont1  |B|:"<<std::bitset<16>(NewFont1)<<std::endl;

    NewFont1=(NewFont1^ItalicMask);
	std::cout<<"NewFont1  |I|:"<<std::bitset<16>(NewFont1)<<std::endl;

	NewFont1=(NewFont ^ SizeMask);
	std::cout<<"NewFont1  |B|I|:"<<std::bitset<16>(NewFont1)<<std::endl;

	NewFont1=(NewFont1 ^ StyleMask);
	std::cout<<"NewFont1  |B|I|:"<<std::bitset<16>(NewFont1)<<std::endl;

    NewFont1 =(NewFont1 ^ BoldMask);
	std::cout<<"NewFont1  |B|I|:"<<std::bitset<16>(NewFont1)<<std::endl;


    NewFont1 =(NewFont1 ^ BoldMask);
	std::cout<<"NewFont1  |B|I|:"<<std::bitset<16>(NewFont1)<<std::endl;

	return 0;
}