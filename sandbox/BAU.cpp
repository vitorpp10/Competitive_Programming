use std::cmp::Ordering;
use std::collections::BinaryHeap;
use std::io::{self, BufRead};

const INF: i64 = 1e18 as i64;

#[derive(Copy, Clone, Eq, PartialEq)]
struct State {
    w: i64,
    cw: usize,
    uw: usize,
}

impl Ord for State {
    fn cmp(&self, other: &Self) -> Ordering {
        other.w.cmp(&self.w)
    }
}

impl PartialOrd for State {
    fn partial_cmp(&self, other: &Self) -> Option<Ordering> {
        Some(self.cmp(other))
    }
}

fn main() {
    let stdin = io::stdin();
    let mut iterator = stdin.lock().lines().map(|ln| ln.unwrap());
    
    let first_line = iterator.next().unwrap();
    let mut tokens = first_line.split_whitespace();
    let n: usize = tokens.next().unwrap().parse().unwrap();
    let m: usize = tokens.next().unwrap().parse().unwrap();

    let mut g: Vec<Vec<(i32, usize)>> = vec![vec![]; n + 1];

    for _ in 0..m {
        if let Some(line) = iterator.next() {
            let mut edge_tokens = line.split_whitespace();
            let u: usize = edge_tokens.next().unwrap().parse().unwrap();
            let v: usize = edge_tokens.next().unwrap().parse().unwrap();
            let l: i32 = edge_tokens.next().unwrap().parse().unwrap();
            g[u].push((l, v));
        }
    }

    let mut d: Vec<Vec<i64>> = vec![vec![INF; 2]; g.len()];
    let mut q = BinaryHeap::new();

    d[1][0] = 0;
    q.push(State { w: 0, cw: 1, uw: 0 });

    while let Some(State { w, cw, uw }) = q.pop() {
        if w > d[cw][uw] {
            continue;
        }

        for &(pv, cv) in &g[cw] {
            let pv_i64 = pv as i64;
            
            if d[cv][0] > d[cw][0] + pv_i64 {
                d[cv][0] = d[cw][0] + pv_i64;
                q.push(State { w: d[cv][0], cw: cv, uw: 0 });
            }

            if d[cv][1] > d[cw][0] + (pv_i64 / 2) {
                d[cv][1] = d[cw][0] + (pv_i64 / 2);
                q.push(State { w: d[cv][1], cw: cv, uw: 1 });
            }
            
            if d[cv][1] > d[cw][1] + pv_i64 {
                d[cv][1] = d[cw][1] + pv_i64;
                q.push(State { w: d[cv][1], cw: cv, uw: 1 });
            }
        }
    }

    println!("{}", d[n][1]);
}
