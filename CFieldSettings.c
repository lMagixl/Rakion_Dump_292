
/* public: __thiscall CFieldSettings::CFieldSettings(class CFieldSettings const &) */

CFieldSettings * __thiscall
CFieldSettings::CFieldSettings(CFieldSettings *this,CFieldSettings *param_1)

{
                    /* 0x113dc0  102  ??0CFieldSettings@@QAE@ABV0@@Z */
  CChangeable::CChangeable((CChangeable *)this);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return this;
}

