// generated by Fast Light User Interface Designer (fluid) version 1.0106

#ifndef SaveAsDialog_H
#define SaveAsDialog_H
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Return_Button.H>
#include <FL/Fl_Button.H>

class SaveAsDialog {
public:
  SaveAsDialog();
  Fl_Double_Window *saveAsDialog;
private:
  Fl_Input *project_name;
  inline void cb_Ok_i(Fl_Return_Button*, void*);
  static void cb_Ok(Fl_Return_Button*, void*);
  inline void cb_Cancel_i(Fl_Button*, void*);
  static void cb_Cancel(Fl_Button*, void*);
public:
  void show();
  int shown();
private:
  bool m_ok;
public:
  bool ok();
  const char* projectName();
  ~SaveAsDialog();
};
#endif
