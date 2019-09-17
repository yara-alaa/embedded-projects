extern void DIO_vidsetportdir(u8 port, u8 dir[])
{
	switch (port)
	{
	case 0:
		u8 i;
		for (i = 0;i < 8;i++)
		{
			if (dir[i] == 0)
				clr_bit(DDRA, i);
			if (dir[i] == 1)
				set_bit(DDRA, i);
		}
		break;
	case 1:
		u8 i;
		for (i = 0;i < 8;i++)
		{
			if (dir[i] == 0)
				clr_bit(DDRB, i);
			if (dir[i] == 1)
				set_bit(DDRB, i);
		}
		break;
	case 2:
		u8 i;
		for (i = 0;i < 8;i++)
		{
			if (dir[i] == 0)
				clr_bit(DDRC, i);
			if (dir[i] == 1)
				set_bit(DDRC, i);
		}
		break;
		break;
	case 3:
		u8 i;
		for (i = 0;i < 8;i++)
		{
			if (dir[i] == 0)
				clr_bit(DDRD, i);
			if (dir[i] == 1)
				set_bit(DDRD, i);
		}
		break;

	}
}
extern void DIO_vidwriteportvalues(u8 port, u8 value[])
{
	switch (port)
	{
	case 0:
		u8 i;
		for (i = 0;i < 8;i++)
		{
			if (value[i] == 0)
				clr_bit(DDRA, i);
			if (value[i] == 1)
				set_bit(DDRA, i);
		}
		break;
	case 1:
		u8 i;
		for (i = 0;i < 8;i++)
		{
			if (value[i] == 0)
				clr_bit(DDRB, i);
			if (value[i] == 1)
				set_bit(DDRB, i);
		}
		break;
	case 2:
		u8 i;
		for (i = 0;i < 8;i++)
		{
			if (value[i] == 0)
				clr_bit(DDRC, i);
			if (value[i] == 1)
				set_bit(DDRC, i);
		}
		break;
		break;
	case 3:
		u8 i;
		for (i = 0;i < 8;i++)
		{
			if (value[i] == 0)
				clr_bit(DDRD, i);
			if (value[i] == 1)
				set_bit(DDRD, i);
		}
		break;

	}



}