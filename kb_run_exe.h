#include <string>


#pragma once

namespace kb
{
	//	���݂̃A�v���P�[�V�����̃t�@�C���p�X���擾����
	void get_module_directory(HINSTANCE hInstance, std::string& dname1);

	//	���s�t�@�C�����Ăяo��
	int run_exe(std::string& iPath, BOOL iConsole, DWORD* o_dwExitCode, DWORD* o_dwError, LPCTSTR iCurrentPath, int test1);

};

