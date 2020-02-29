update:
	@git add . 
	@git commit -m "[update] `date '+%Y-%m-%d %H:%M:%S JST'`"
	@git push

.PHONY: update
