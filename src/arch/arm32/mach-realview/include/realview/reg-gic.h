#ifndef __REALVIEW_REG_GIC_H__
#define __REALVIEW_REG_GIC_H__

/*
 * generic interrupt controller 1
 */
#define	REALVIEW_GIC1_CPU_CTRL				(0x10040000 + 0x000)
#define	REALVIEW_GIC1_CPU_PRIMASK			(0x10040000 + 0x004)
#define	REALVIEW_GIC1_CPU_BINPOINT			(0x10040000 + 0x008)
#define	REALVIEW_GIC1_CPU_INTACK			(0x10040000 + 0x00C)
#define	REALVIEW_GIC1_CPU_EOI				(0x10040000 + 0x010)
#define	REALVIEW_GIC1_CPU_RUNNINGPRI		(0x10040000 + 0x014)
#define	REALVIEW_GIC1_CPU_HIGHPRI			(0x10040000 + 0x018)

#define	REALVIEW_GIC1_DIST_CTRL				(0X10041000 + 0x000)
#define	REALVIEW_GIC1_DIST_CTR				(0X10041000 + 0x004)
#define	REALVIEW_GIC1_DIST_ENABLE_SET		(0X10041000 + 0x100)
#define	REALVIEW_GIC1_DIST_ENABLE_CLEAR		(0X10041000 + 0x180)
#define	REALVIEW_GIC1_DIST_PENDING_SET		(0X10041000 + 0x200)
#define	REALVIEW_GIC1_DIST_PENDING_CLEAR	(0X10041000 + 0x280)
#define	REALVIEW_GIC1_DIST_ACTIVE_BIT		(0X10041000 + 0x300)
#define	REALVIEW_GIC1_DIST_PRI				(0X10041000 + 0x400)
#define	REALVIEW_GIC1_DIST_TARGET			(0X10041000 + 0x800)
#define	REALVIEW_GIC1_DIST_CONFIG			(0X10041000 + 0xc00)
#define	REALVIEW_GIC1_DIST_SOFTINT			(0X10041000 + 0xf00)


#endif /* __REALVIEW_REG_GIC_H__ */