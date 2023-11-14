float problemSolution2(float i, float j, float k) {
    return i > j ? (i > k ? i : k) : (j > k ? j : k);
}