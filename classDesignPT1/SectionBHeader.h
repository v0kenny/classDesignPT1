#include <string>
using namespace std;

class Metadata {
public:
	Metadata(string file, string image, int month, int day, int year, double size, string author, double width, double height, string aperture, double exposure, int ISO_Value, bool flash);
	string getFileName();
	string getImageType();
	int getMonth();
	int getDay();
	int getYear();
	double getSize();
	string getAuthor();
	double getWidth();
	double getHeight();
	string getApertureSize();
	double getExposureTime();
	int getISOValue();
	bool isFlashEnabled();

	void setFileName(string file);
	void setImageType(string image);
	void setDateCreated(int month, int day, int year);
	void setSize(double size);
	void setAuthor(string author);
	void setImageDimensions(double width, double height);
	void setApertureSize(string aperture);
	void setExposureTime(double exposure);
	void setISOValue(int ISO_Value);
	void setFlashEnabled(bool flash);
private:
	string fileName;
	string imageType;
	int m, d, y;
	double s;
	string authorName;
	double w, h;
	string apertureSize;
	double exposureTime;
	int iso;
	bool f;
};

void printMetaData(Metadata metadata);
