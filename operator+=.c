
/* public: class CTWString & __thiscall CTWString::operator+=(class CTWString const &) */

CTWString * __thiscall CTWString::operator+=(CTWString *this,CTWString *param_1)

{
                    /* 0x24fa0  864  ??YCTWString@@QAEAAV0@ABV0@@Z */
  wcslen(*(wchar_t **)this);
  wcslen(*(wchar_t **)param_1);
  FUN_36024d10();
  wcscat(*(wchar_t **)this,*(wchar_t **)param_1);
  return this;
}

