BEGIN {}

$2 ~ /^the$/ {print $2  " " $3}

END {}
