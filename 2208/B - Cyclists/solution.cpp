#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k, p, m;
        cin >> n >> k >> p >> m;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // Convert to 0-based indexing
        p--;
        
        int win_plays = 0;
        int total_cost = 0;
        
        // If win card alone exceeds m, can't play it
        if (a[p] > m) {
            cout << "0
";
            continue;
        }
        
        // Simulate deck using indices
        vector<int> deck(n);
        for (int i = 0; i < n; i++) {
            deck[i] = i;
        }
        
        int pos_win = p;
        
        // Phase 1: First win play
        // Bring win card to first k positions
        while (pos_win >= k) {
            // Find cheapest card in first k positions
            int min_cost = INT_MAX;
            int min_idx = -1;
            
            for (int j = 0; j < k; j++) {
                int card_idx = deck[j];
                if (a[card_idx] < min_cost) {
                    min_cost = a[card_idx];
                    min_idx = j;
                }
            }
            
            // Check if we can afford this card
            if (total_cost + min_cost > m) {
                total_cost = m + 1; // Mark as exceeded
                break;
            }
            
            // Play this card
            int card = deck[min_idx];
            deck.erase(deck.begin() + min_idx);
            deck.push_back(card);
            total_cost += min_cost;
            
            // Update win card position
            if (min_idx < pos_win) {
                pos_win--;
            }
        }
        
        // Try to play win card first time
        if (total_cost <= m && pos_win < k) {
            // Check if we can afford win card
            if (total_cost + a[p] <= m) {
                total_cost += a[p];
                win_plays++;
                
                // Move win card to back
                for (int j = 0; j < k; j++) {
                    if (deck[j] == p) {
                        int card = deck[j];
                        deck.erase(deck.begin() + j);
                        deck.push_back(card);
                        break;
                    }
                }
            } else {
                total_cost = m + 1; // Can't afford win card
            }
        }
        
        // Phase 2: Subsequent win plays
        if (total_cost <= m && win_plays > 0) {
            // Calculate cost for one full cycle (play n-k non-win cards then win card)
            vector<int> deck2 = deck;
            int cycle_cost = 0;
            bool cycle_possible = true;
            
            // Calculate non-win cards cost for one cycle
            for (int step = 0; step < n - k; step++) {
                // Find cheapest in first k
                int min_cost = INT_MAX;
                int min_idx = -1;
                
                for (int j = 0; j < k; j++) {
                    int card_idx = deck2[j];
                    if (a[card_idx] < min_cost) {
                        min_cost = a[card_idx];
                        min_idx = j;
                    }
                }
                
                // Play it
                int card = deck2[min_idx];
                deck2.erase(deck2.begin() + min_idx);
                deck2.push_back(card);
                cycle_cost += min_cost;
            }
            
            // Add win card cost
            cycle_cost += a[p];
            
            // Play as many full cycles as possible
            while (total_cost + cycle_cost <= m) {
                total_cost += cycle_cost;
                win_plays++;
            }
        }
        
        cout << win_plays << "
";
    }
    
    return 0;
}