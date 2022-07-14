find . -type f -iname '*.sh' -printf "%f\n" | cut -f1 -d "." 
