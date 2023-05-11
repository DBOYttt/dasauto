
#include <windows.h>
#include <tchar.h>
#include <string>
#include "autodas.h"
#include "superdasauto.h"

using namespace std;

/* Samochod mojSamochod("Ford", "Mustang", 2020);

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch (msg)
    {
    case WM_PAINT:
    {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hwnd, &ps);

        std::string info = "Marka: " + mojSamochod.getMarka() + ", Model: " + mojSamochod.getModel() +
            ", Rok Produkcji: " + std::to_string(mojSamochod.getRokProdukcji()) +
            ", Przebieg: " + std::to_string(mojSamochod.getPrzebieg()) + " km.";

        std::wstring wideString = std::wstring(info.begin(), info.end());
        const TCHAR* infoTCHAR = wideString.c_str();

        TextOut(hdc, 5, 5, infoTCHAR, _tcslen(infoTCHAR));

        EndPaint(hwnd, &ps);
        break;
    }
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hwnd, msg, wParam, lParam);
    }
    return 0;
}

int WINAPI _tWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPTSTR lpCmdLine, _In_ int nCmdShow)
{
    WNDCLASSEX wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);
    wcex.style = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc = WndProc;
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = hInstance;
    wcex.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
    wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wcex.lpszMenuName = NULL;
    wcex.lpszClassName = TEXT("DasAuto");
    wcex.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
    if (!RegisterClassEx(&wcex))
        return 1;

    HWND hwnd = CreateWindowEx(0, _T("dasauto"), _T("dasauto"), WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 500, 500, NULL, NULL, hInstance, NULL);

    if (!hwnd)
        return 1;

    ShowWindow(hwnd, nCmdShow);
    UpdateWindow(hwnd);

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return (int)msg.wParam;
}
*/
int main() {
    // Zadanie 1
    Samochod s1("Fiat", "126p", 1990);

    // Zadanie 2
    s1.jedz(120);
    s1.informacje();

    // Zadanie 3
    SportowySamochod ss1("Ferrari", "488 Spider", 2022, 340);

    // Zadanie 4
    ss1.jedz(500);
    ss1.turbo(30);
    ss1.informacje();
    std::cout << "Maksymalna predkosc: " << ss1.getMaksymalnaPredkosc() << " km/h.\n";

    return 0;
}



