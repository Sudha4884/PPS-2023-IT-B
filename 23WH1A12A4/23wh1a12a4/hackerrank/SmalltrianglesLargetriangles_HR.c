double area(triangle tr) {
    double p = (tr.a + tr.b + tr.c) / 2.0;
    return sqrt(p * (p - tr.a) * (p - tr.b) * (p - tr.c));
}

int compare(const void *a, const void *b) {
    triangle *t1 = (triangle*) a;
    triangle *t2 = (triangle*) b;
    double area1 = area(*t1);
    double area2 = area(*t2);
    if (area1 > area2) {
        return 1;
    } else if (area1 < area2) {
        return -1;
    } else {
        return 0;
    }
}
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/

    //qsort(tr, n, sizeof(triangle), compare);
    qsort(tr, n, sizeof(triangle), compare);
}

