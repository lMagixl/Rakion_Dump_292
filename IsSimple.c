
/* public: int __thiscall CAnyProjection3D::IsSimple(void) */

int __thiscall CAnyProjection3D::IsSimple(CAnyProjection3D *this)

{
                    /* 0x3900  2475  ?IsSimple@CAnyProjection3D@@QAEHXZ */
  return (uint)(*(CAnyProjection3D **)(this + 0x658) == this);
}

