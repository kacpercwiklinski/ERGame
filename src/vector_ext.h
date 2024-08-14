#ifndef VECTOR_EXT_H
#define VECTOR_EXT_H

float v2_dist(Vector2 a, Vector2 b) {
    float dx = b.x - a.x;
    float dy = b.y - a.y;
    return sqrtf(dx * dx + dy * dy);
}

unsigned int v2i_hash(Vector2i pos, int hash_map_size) {
    return (unsigned int)((pos.x * 73856093) ^ (pos.y * 19349663)) % hash_map_size;
}

bool v2i_equal(Vector2i a, Vector2i b) {
    return a.x == b.x && a.y == b.y;
}

int v2i_manhattan_distance(Vector2i a, Vector2i b) {
    return abs(a.x - b.x) + abs(a.y - b.y);
}

#endif