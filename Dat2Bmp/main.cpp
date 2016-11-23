#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>

#include <Windows.h>
#include <algorithm>
#include <memory>

using namespace std;

// Save the bitmap to a bmp file
void SaveBitmapToFile( BYTE* pBitmapBits,
                       LONG lWidth,
                       LONG lHeight,
                       WORD wBitsPerPixel,
                       const unsigned long& padding_size,
                       LPCTSTR lpszFileName )
{
    // Some basic bitmap parameters
    unsigned long headers_size = sizeof( BITMAPFILEHEADER ) +
                                 sizeof( BITMAPINFOHEADER );

    unsigned long pixel_data_size = lHeight * ( ( lWidth * ( wBitsPerPixel / 8 ) ) + padding_size );

    BITMAPINFOHEADER bmpInfoHeader = {0};

    // Set the size
    bmpInfoHeader.biSize = sizeof(BITMAPINFOHEADER);

    // Bit count
    bmpInfoHeader.biBitCount = wBitsPerPixel;

    // Use all colors
    bmpInfoHeader.biClrImportant = 0;

    // Use as many colors according to bits per pixel
    bmpInfoHeader.biClrUsed = 0;

    // Store as un Compressed
    bmpInfoHeader.biCompression = BI_RGB;

    // Set the height in pixels
    bmpInfoHeader.biHeight = lHeight;

    // Width of the Image in pixels
    bmpInfoHeader.biWidth = lWidth;

    // Default number of planes
    bmpInfoHeader.biPlanes = 1;

    // Calculate the image size in bytes
    bmpInfoHeader.biSizeImage = pixel_data_size;

    BITMAPFILEHEADER bfh = {0};

    // This value should be values of BM letters i.e 0x4D42
    // 0x4D = M 0×42 = B storing in reverse order to match with endian
    bfh.bfType = 0x4D42;
    //bfh.bfType = 'B'+('M' << 8);

    // <<8 used to shift ‘M’ to end  */

    // Offset to the RGBQUAD
    bfh.bfOffBits = headers_size;

    // Total size of image including size of headers
    bfh.bfSize =  headers_size + pixel_data_size;

    // Create the file in disk to write
    HANDLE hFile = CreateFile( lpszFileName,
                                GENERIC_WRITE,
                                0,
                                NULL,
                                CREATE_ALWAYS,
                                FILE_ATTRIBUTE_NORMAL,
                                NULL );

    // Return if error opening file
    if( !hFile ) return;

    DWORD dwWritten = 0;

    // Write the File header
    WriteFile( hFile,
                &bfh,
                sizeof(bfh),
                &dwWritten ,
                NULL );

    // Write the bitmap info header
    WriteFile( hFile,
                &bmpInfoHeader,
                sizeof(bmpInfoHeader),
                &dwWritten,
                NULL );

    // Write the RGB Data
    WriteFile( hFile,
                pBitmapBits,
                bmpInfoHeader.biSizeImage,
                &dwWritten,
                NULL );

    // Close the file handle
    CloseHandle( hFile );
}


int main()
{
    string filename = "Processed_Image.txt";
    ifstream file (filename.c_str(), ifstream::binary);

    //http://www.cplusplus.com/reference/istream/istream/read/?kw=read

    if (file)
    {
        // get length of file:
        file.seekg (0, file.end);
        int length = file.tellg();
        file.seekg (0, file.beg);

        char * buffer = new char [length];

        std::cout << "Reading " << length << " characters... ";
        // read data as a block:
        file.read (buffer,length);

        if (file)
          std::cout << "all characters read successfully.";
        else
          std::cout << "error: only " << file.gcount() << " could be read";
        file.close();

        // ...buffer contains the entire file...

        BYTE * buffByte = (unsigned char*) buffer;
        string path_str = "lena.bmp"; //your string containing path
        wstring path_wstr( path_str.begin(), path_str.end() );
        LPCTSTR str = path_wstr.c_str();
        SaveBitmapToFile(buffByte, 128, 128, 8, 0, str );

//        //http://stackoverflow.com/questions/2654480/writing-bmp-image-in-pure-c-c-without-other-libraries

//        FILE *f;
//        int w(128), h(128);
//        int filesize = 54 + w*h;

//        unsigned char bmpfileheader[14] = {'B','M', 0,0,0,0, 0,0, 0,0, 54,0,0,0};
//        unsigned char bmpinfoheader[40] = {40,0,0,0, 0,0,0,0, 0,0,0,0, 1,0, 24,0};
//        unsigned char bmppad[3] = {0,0,0};

//        bmpfileheader[ 2] = (unsigned char)(filesize    );
//        bmpfileheader[ 3] = (unsigned char)(filesize>> 8);
//        bmpfileheader[ 4] = (unsigned char)(filesize>>16);
//        bmpfileheader[ 5] = (unsigned char)(filesize>>24);

//        bmpinfoheader[ 4] = (unsigned char)(       w    );
//        bmpinfoheader[ 5] = (unsigned char)(       w>> 8);
//        bmpinfoheader[ 6] = (unsigned char)(       w>>16);
//        bmpinfoheader[ 7] = (unsigned char)(       w>>24);
//        bmpinfoheader[ 8] = (unsigned char)(       h    );
//        bmpinfoheader[ 9] = (unsigned char)(       h>> 8);
//        bmpinfoheader[10] = (unsigned char)(       h>>16);
//        bmpinfoheader[11] = (unsigned char)(       h>>24);

//        f = fopen ("img.bmp", "wb");
//        fwrite (bmpfileheader, 1, 14, f);
//        fwrite (bmpinfoheader, 1, 40, f);
//        fwrite (buffer, 1, length, f);

        delete[] buffer;

    }

    return 0;
}

