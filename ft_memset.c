void  *ft_memset(void *s, int c, int n)
{
  unsigned char *ptr = s;
  while(n--)
    *ptr++ = (unsigned char)c;
  return s;
}
