/*
file_explorer_bootstrap
author: altnoi
*/

#include <iostream>
using namespace std;

string urlDecode(string src) {
	string ans;

	char ch;
	for (int i = 0; i < src.length(); i++) {
		if (src[i] != '%') {
			if (src[i] == '+') {
				ans += " ";
			}
			else {
				ans += src[i];
			}
		}
		else {
			int ii;
			int status = sscanf_s(src.substr(i + 1, 2).c_str(), "%x", &ii);
			if (status) {
				ch = static_cast<char>(ii);
				ans += ch;
				i = i + 2;
			}
		}
	}
	return ans;
}

int main(int argc, char* argv[]) {

	if (argc == 2) {
		string path = argv[1];
		path = urlDecode(path.substr(7));

		string command = "explorer " + path;

		system(command.c_str());
	}
}