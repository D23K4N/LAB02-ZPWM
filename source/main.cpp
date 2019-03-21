#include <Windows.h>
#include "res.h"


HWND g_hPrzycisk;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)
{
  HWND hwndMainWindow = CreateDialog(hInstance, MAKEINTRESOURCE(IDD_MAINVIEW), NULL, NULL);



  g_hPrzycisk = CreateWindowEx(0, "BUTTON", "Nasz przycisk", WS_BORDER | WS_VISIBLE, 100, 100, 150, 30, hwndMainWindow, NULL, hInstance, NULL);
  HWND hText = CreateWindowEx(0, "EDIT", NULL, WS_CHILD | WS_VISIBLE | WS_BORDER, 50, 50, 150, 20, hwndMainWindow, NULL, hInstance, NULL);
  HWND hTet = CreateWindowEx(WS_EX_CLIENTEDGE, "EDIT", NULL, WS_BORDER | WS_VISIBLE | WS_BORDER | WS_VSCROLL | ES_MULTILINE | ES_AUTOVSCROLL, 5, 5, 150, 150, hwndMainWindow, NULL, hInstance, NULL);

  //ShowWindow(hText, iCmdShow);
  ShowWindow(g_hPrzycisk, iCmdShow);
  //ShowWindow(hwndMainWindow, iCmdShow);

  //system("pause");
  while (true);

  return 0;

  /* 
  
      upiększyć aplikancje ikony obrazki itp


  */
}