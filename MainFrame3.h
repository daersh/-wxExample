//
// Created by HYUN WOO Lee on 2024. 9. 21..
//

#ifndef MAINFRAME_H
#define MAINFRAME_H
#include <wx/wx.h>

class MainFrame3: public wxFrame
{

public:
    MainFrame3(const wxString& title);

private:
    void OnButtonClicked(wxCommandEvent& event);
    void OnSliderClicked(wxCommandEvent& event);
    void OnTextClicked(wxCommandEvent& event);
    void OnButtonClicked2(wxCommandEvent& event);
};


#endif //MAINFRAME_H
