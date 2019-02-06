#ifndef TIFFWRITE_HH
#define TIFFWRITE_HH

#include <fstream>
#include <string>
#include <vector>



class TiffWrite{

public:
	TiffWrite();

	~TiffWrite();

	std::string static tiff_write(std::vector<std::string> paramList);


private:

	static void IFD_intepret(unsigned char* IFD, bool should_reverse, std::ifstream& file);
	static std::string tag_intepret(short code);
	static std::string type_intepret(short code);
	static int type_length_intepret(short code);
	static void type_output_intepret(short tag, short code, unsigned char *data_array, int n, bool should_reverse);
	static void display_image(std::ifstream& file, bool should_reverse);

	static int image_length_;
	static int image_width_;
	static int rows_per_strip_;
	static std::vector<int> strip_offsets_;
	static std::vector<int> strip_byte_counts_;
	static int strips_per_image_;
	static std::vector<int> bits_per_sample_;
	static int photo_metric_;
	static std::vector<int>r_color_map_;
	static std::vector<int>g_color_map_;
	static std::vector<int>b_color_map_;
};



#endif