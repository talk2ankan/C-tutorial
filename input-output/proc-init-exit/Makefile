bin := cmd-args exit-status

.PHONY : all
all : $(bin)

$(bin) : % : %.c

.PHONY : clean
clean :
	$(RM) $(bin)
