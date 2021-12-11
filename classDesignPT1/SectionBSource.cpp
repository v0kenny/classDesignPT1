#include <iostream>
#include <string>
#include "SectionBHeader.h"

using namespace std;

Metadata::Metadata(string file, string image, int month, int day, int year, double size, string author, double width, double height, string aperture, double exposure, int ISO_Value, bool flash)
	: fileName{ file }, imageType{ image }, m{ month }, d{ day }, y{ year }, s{ size }, authorName{ author }, w{ width }, h{ height }, apertureSize{ aperture }, exposureTime{ exposure }, iso{ ISO_Value }, f{ flash } {}

string Metadata::getFileName() {
	return fileName;
}

string Metadata::getImageType() {
	return imageType;
}

int Metadata::getMonth() {
	return m;
}

int Metadata::getDay() {
	return d;
}

int Metadata::getYear() {
	return y;
}

double Metadata::getSize() {
	return s;
}

string Metadata::getAuthor() {
	return authorName;
}

double Metadata::getWidth() {
	return w;
}

double Metadata::getHeight() {
	return h;
}

string Metadata::getApertureSize() {
	return apertureSize;
}

double Metadata::getExposureTime() {
	return exposureTime;
}

int Metadata::getISOValue() {
	return iso;
}

bool Metadata::isFlashEnabled() {
	return f;
}

void Metadata::setFileName(string file) {
	fileName = file;
}

void Metadata::setImageType(string image) {
	if (imageType == "PNG" || imageType == "GIF" || imageType == "JPEG") {
		imageType = image;
	}
	else {
		cout << "Invalid image type" << "\n";
	}
}

void Metadata::setDateCreated(int month, int day, int year) {
	if (d > 0 && d < 32 && m>0 && m < 13 && y>0) {
		m = month;
		d = day;
		y = year;
	}
	else {
		cout << "Invalid Date" << "\n";
	}
}

void Metadata::setSize(double size) {
	if (s >= 0) {
		s = size;
	}
	else {
		cout << "Invalid Size" << "\n";
	}
}

void Metadata::setAuthor(string author) {
	authorName = author;
}

void Metadata::setImageDimensions(double width, double height) {
	if (w >= 0 && h >= 0) { 
		w = width;
		h = height;
	}
	else {
		cout << "Invalid Dimensions" << "\n";
	}
}

void Metadata::setApertureSize(string aperture) {
	if (aperture.size() > 2 && aperture.at(0) == 'f' && aperture.at(1) == '/') {
		apertureSize = aperture;
	}
	else {
		cout << "Invalid Aperture Size format" << "\n";
	}
}

void Metadata::setExposureTime(double exposure) {
	if (exposure >= 0) {
		exposureTime = exposure;
	}
	else {
		cout << "Invalid ExposureTime Format" << "\n";
	}
}

void Metadata::setISOValue(int ISO_Value) {
	iso = ISO_Value;
}

void Metadata::setFlashEnabled(bool flash) {
	f = flash;
}

void printMetaData(Metadata metadata) {
	cout << "File Name: " << metadata.getFileName() << " \n";
	cout << "Image Type: " << metadata.getImageType() << " \n";
	cout << "Date Created: " << metadata.getDay() << "/" << metadata.getMonth() << "/" << metadata.getYear() << "\n";
	cout << "Size: " << metadata.getSize() << " \n";
	cout << "Author: " << metadata.getAuthor() << " \n";
	cout << "Image Dimension : " << metadata.getWidth() << "x" << metadata.getHeight() << "\n";
	cout << "Aperture Size: " << metadata.getApertureSize() << " \n";
	cout << "Exposure Time: " << metadata.getExposureTime() << " \n";
	cout << "Flash Enabled: " << metadata.isFlashEnabled() << " \n";
}
