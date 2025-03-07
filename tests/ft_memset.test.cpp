#include "test.h"
extern "C" {
  void *ft_memset(void *s, int c, int n);
}

void test_ft_memset()
{
  describe("ft_memset suite test");
  it("should run", [](){
      return allOf(0 == 0 );
  });
}
