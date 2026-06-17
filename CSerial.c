
/* public: __thiscall CSerial::CSerial(void) */

CSerial * __thiscall CSerial::CSerial(CSerial *this)

{
  char *pcVar1;
  
                    /* 0x36cb0  213  ??0CSerial@@QAE@XZ */
  CChangeable::CChangeable((CChangeable *)(this + 4));
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 8) = 0;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0xc) = pcVar1;
  *(undefined4 *)(this + 0x10) = 0;
  return this;
}

