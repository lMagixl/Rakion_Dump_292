
/* public: __thiscall CChunkID::CChunkID(char const *) */

void __thiscall CChunkID::CChunkID(CChunkID *this,char *param_1)

{
                    /* 0x2a20  59  ??0CChunkID@@QAE@PBD@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  this[4] = *(CChunkID *)(param_1 + 4);
  return;
}

