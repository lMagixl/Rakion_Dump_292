
/* public: int __thiscall CFontData::IsCharDefined(char)const  */

int __thiscall CFontData::IsCharDefined(CFontData *this,char param_1)

{
                    /* 0x2280  2373  ?IsCharDefined@CFontData@@QBEHD@Z */
  if ((*(int *)(this + (uint)(byte)param_1 * 0x10 + 0x48) == *(int *)(this + 0x238)) &&
     (*(int *)(this + (uint)(byte)param_1 * 0x10 + 0x4c) == *(int *)(this + 0x23c))) {
    return 0;
  }
  return 1;
}

